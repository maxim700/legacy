import qbs

CppApplication {
    consoleApplication: true
    files: [
        "archer.cpp",
        "archer.h",
        "character.cpp",
        "character.h",
        "main.cpp",
        "priest.cpp",
        "priest.h",
        "warrior.cpp",
        "warrior.h",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: "application"
        qbs.install: true
        qbs.installDir: "bin"
    }
}
