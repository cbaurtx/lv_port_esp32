idf_component_register(SRCS main.c
                       INCLUDE_DIRS "../components" "../components/lvgl_esp32_drivers" "../components/lv_examples"
                       REQUIRES esp_timer driver)

