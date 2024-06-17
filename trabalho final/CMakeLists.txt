cmake_minimum_required(VERSION 3.29)
project(MyProject)

# Definir as fontes dos diretórios Core e Funcionarios
file(GLOB CORE_SOURCES "Core/source/*.cpp")
file(GLOB FUNCIONARIOS_SOURCES "Funcionarios/source/*.cpp")
file(GLOB AREATRAB_SOURCES "AreaTrab/source/*.cpp")

set(SOURCES
    ${CORE_SOURCES}
    ${FUNCIONARIOS_SOURCES}
    #${AREATRAB_SOURCES}
    main.cpp
)

# Incluir diretórios de cabeçalhos
include_directories(
    Core/include
    Funcionarios/include
    #AreaTrab/include
)

# Adicionar o executável
add_executable(teste ${SOURCES})