idf_component_register(SRCS "esp32_idf_iot.c"
                    PRIV_REQUIRES spi_flash esp_wifi bt
                    INCLUDE_DIRS "/home/eric/esp/esp-idf/components/bt/include/esp32/include"
                    REQUIRES driver)