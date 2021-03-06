project(testmosync)

set(testmosync_SOURCES
	testmosync.cpp
	testmosyncplugin.cpp
	testmosyncsettings.cpp
	testmosyncworker.cpp
)

set(testmosync_HEADERS
	testmosync.h
	testmosyncplugin.h
	testmosyncsettings.h
	testmosyncworker.h
)

include_directories(
    ${CMAKE_SOURCE_DIR}/swagger/sdrangel/code/qt5/client
)

if(NOT SERVER_MODE)
    set(testmosync_SOURCES
        ${testmosync_SOURCES}
        testmosyncgui.cpp
        testmosyncgui.ui
    )
    set(testmosync_HEADERS
        ${testmosync_HEADERS}
        testmosyncgui.h
    )

    set(TARGET_NAME outputtestmosync)
    set(TARGET_LIB "Qt5::Widgets")
    set(TARGET_LIB_GUI "sdrgui")
    set(INSTALL_FOLDER ${INSTALL_PLUGINS_DIR})
else()
    set(TARGET_NAME outputtestmosyncsrv)
    set(TARGET_LIB "")
    set(TARGET_LIB_GUI "")
    set(INSTALL_FOLDER ${INSTALL_PLUGINSSRV_DIR})
endif()

add_library(${TARGET_NAME} SHARED
	${testmosync_SOURCES}
)

target_link_libraries(${TARGET_NAME}
    Qt5::Core
    ${TARGET_LIB}
	sdrbase
	${TARGET_LIB_GUI}
    swagger
)

install(TARGETS ${TARGET_NAME} DESTINATION ${INSTALL_FOLDER})
