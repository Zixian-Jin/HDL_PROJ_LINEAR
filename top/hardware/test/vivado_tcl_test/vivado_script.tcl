create_project -force tcl_sync_proj ../vivado_tcl_test

add_files -norecurse ./hdl/fixed_mult.sv
add_files -norecurse ./hdl/fixed_vector_mult.sv
add_files -norecurse ./hdl/join2.sv
add_files -norecurse ./hdl/skid_buffer.sv
add_files -fileset constrs_1 -norecurse ./constraints.xdc 

set_property top fixed_vector_mult [current_fileset]
update_compile_order -fileset sources_1
launch_runs synth_1 -jobs 20 
wait_on_run synth_1
open_run synth_1 -name synth_1
report_utilization -hierarchical -file ./reports/utils.rpt
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths 10 -input_pins -routable_nets -name timing_1 -file ./reports/timing.rpt
report_power -file ./reports/power.rpt -name {{power_1}}
