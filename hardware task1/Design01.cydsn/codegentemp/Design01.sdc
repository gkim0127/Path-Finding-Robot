# THIS FILE IS AUTOMATICALLY GENERATED
# Project: \\files.auckland.ac.nz\myhome\Documents\PSoC Creator\hardware task1\Design01.cydsn\Design01.cyprj
# Date: Sat, 20 Aug 2022 04:48:59 GMT
#set_units -time ns
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {ADC_SAR_1_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 25 49} [list [get_pins {ClockBlock/aclk_glb_0}]]
create_generated_clock -name {timer_clock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 241 481} [list [get_pins {ClockBlock/dclk_glb_0}]]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for \\files.auckland.ac.nz\myhome\Documents\PSoC Creator\hardware task1\Design01.cydsn\TopDesign\TopDesign.cysch
# Project: \\files.auckland.ac.nz\myhome\Documents\PSoC Creator\hardware task1\Design01.cydsn\Design01.cyprj
# Date: Sat, 20 Aug 2022 04:48:44 GMT
