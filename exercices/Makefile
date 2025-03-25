# Makefile pour un projet C++

# Compilateur
CXX = g++

# Options de compilation
CXXFLAGS = -Wall -Wextra -std=c++17 -O2

# Répertoires
SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include

# Nom de l'exécutable final
TARGET = monprogramme

# Liste des fichiers sources
SOURCES = $(wildcard $(SRC_DIR)/*.cpp) main.cpp

# Transformation des fichiers sources en fichiers objets
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SOURCES))

# Règle par défaut (première règle exécutée si aucune cible n'est spécifiée)
all: $(BUILD_DIR)/$(TARGET)
	@echo "🔧 Compilation de $(TARGET)..."

# Règle de liaison pour créer l'exécutable final
$(BUILD_DIR)/$(TARGET): $(OBJECTS)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) $^ -o $@

# Règle générique pour compiler les fichiers sources en fichiers objets
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Nettoyer les fichiers compilés
clean:
	@echo "🧹 Nettoyage des fichiers compilés..."
	rm -rf $(BUILD_DIR)

# Nettoyer et recompiler
rebuild: clean all
	@echo "Reconstruction complète du projet..."

# Ajouter une règle pour exécuter le programme
run: all
	@echo "🚀 Exécution de $(TARGET)..."
	@./$(BUILD_DIR)/$(TARGET)

# Déclaration des cibles qui ne correspondent pas à des fichiers
.PHONY: all clean rebuild run
