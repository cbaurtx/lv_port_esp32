[build-menu]
FT_01_LB=_Build
FT_01_CM=idf.py -C ~/Development/Source/lv_port_esp32/  build
FT_01_WD=
FT_02_LB=_Lint
FT_02_CM=cppcheck --language=c --enable=warning,style --template=gcc "%f"
FT_02_WD=
FT_00_LB=Memory map
FT_00_CM=idf.py -C ~/Development/Source/lv_port_esp32/ size-components
FT_00_WD=
EX_00_LB=Monitor
EX_00_CM=xterm  -fa monaco -fs 14 -hold -e "cd ~/Development/Source/lv_port_esp32/ ;. ~/Development/Source/lv_port_esp32/idf_init  ;idf.py monitor -p /dev/ttyACM0"
EX_00_WD=
EX_01_LB=Flash
EX_01_CM=cd ~/Development/Source/lv_port_esp32/ ;. ~/Development/Source/lv_port_esp32/idf_init  ;idf.py flash -p /dev/ttyACM0
EX_01_WD=
