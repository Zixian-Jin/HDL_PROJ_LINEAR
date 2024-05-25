
import cocotb

@cocotb.test()
async def test(dut):
    from pathlib import Path
    import dill
    from cocotb.triggers import Timer

    tb_path = Path.home() / ".mase" / "top" / "hardware" / "test" / "mase_top_tb"
    with open(tb_path / "tb_obj.dill", "rb") as f:
        tb = dill.load(f)(dut)

    tb.initialize()

    in_tensors = tb.generate_inputs(batches=3)
    exp_out = tb.model(*list(in_tensors.values()))

    tb.load_drivers(in_tensors)
    tb.load_monitors(exp_out)

    await Timer(100, units="us")

