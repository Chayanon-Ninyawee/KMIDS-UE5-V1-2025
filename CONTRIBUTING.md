# Folder Structure

This project follows a structured organization for both content and C++ code to ensure maintainability and scalability. Below is the folder structure:

## Content Folder
The **Content/** folder contains all the assets used in the project, such as Blueprints, textures, materials, and animations.

```
Content/
├── Core/
│   ├── GameModes/            # Base game modes and their Blueprints
│   ├── HUD/                  # HUD logic and assets
│   ├── Widgets/              # Shared UI widgets (e.g., menus)
│
├── Environments/
│   ├── Forest/
│   │   ├── Foliage/          # Trees, grass, and foliage meshes
│   │   ├── Textures/         # Forest-specific textures
│   │   ├── Materials/        # Forest materials
│   ├── Desert/
│   ├── Urban/
│
├── FX/
│   ├── Particles/            # Cascade particle systems
│   ├── Niagara/              # Niagara effects (e.g., fire, smoke)
│   ├── Materials/            # Materials for FX
│
├── Assets/
│
├── Sound/
│   ├── Effects/              # Sound effects like footsteps, explosions
│   ├── Music/                # Background music
│
├── UI/
│   ├── Widgets/              # UMG widgets for menus and HUD
│   ├── Textures/             # UI icons, backgrounds
│   ├── Fonts/                # Custom fonts for UI
│
├── Vehicles/
│   ├── Car1/
│       ├── Blueprints/       # Vehicle logic
│       ├── Meshes/           # Car models
│       ├── Materials/        # Vehicle-specific materials
│
└── Maps/
    ├── Levels/               # Gameplay maps
    ├── Lighting/             # Lighting scenarios
    └── Overviews/            # Mini-maps or overview layouts
```

---

## C++ Folder
The **Source/** folder contains all C++ source files for the project, organized into modules for clarity.

```
Source/
├── KMIDS-UE5-V1-2025 /                # Core gameplay module
    ├── KMIDS-UE5-V1-2025.Build.cs     # Build script for the module
    ├── GameModes/
    │   ├── MyGameModeBase.cpp
    │   ├── MyGameModeBase.h
    │
    ├── Vehicles/
    │   ├── Car1/
    |       ├── Car1.cpp
    |       ├── Car1.h
    |
    ├── AI/
    │   ├── AIController.cpp
    │   ├── AIController.h
    │
    ├── UI/
    │   ├── MainMenuWidget.cpp
    │   ├── MainMenuWidget.h
    │
    ├── Utils/
        ├── HelperFunctions.cpp
        ├── HelperFunctions.h
```

---

## Guidelines

### Content Folder
- **Consistent Naming**: Use prefixes like `BP_` for Blueprints, `T_` for Textures, `M_` for Materials, etc.
- **Modular Assets**: Group assets by feature (e.g., forest assets under `Environments/Forest`).
- **Test vs Final**: Use a `Development/` folder for experimental or temporary assets.
- **Collaboration**: Keep the structure intuitive for team members to locate and manage assets easily.

### C++ Folder
- **Modular Design**: Separate gameplay logic, editor tools, and utilities into distinct modules.
- **Class Names**: Follow Unreal Engine conventions (e.g., `A` for actors, `U` for objects, `F` for structs, and `E` for enums).
- **Header Organization**: Place `.h` and `.cpp` files for each class in the same folder.
- **Build.cs**: Update module dependencies and include paths as needed for additional features.

Feel free to suggest improvements or adjustments to the structure for specific project needs!
