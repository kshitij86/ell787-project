idf_component_register(SRCS "sensor_module.c"
                    INCLUDE_DIRS "include"
                    PRIV_REQUIRES bme280
                    REQUIRES driver)