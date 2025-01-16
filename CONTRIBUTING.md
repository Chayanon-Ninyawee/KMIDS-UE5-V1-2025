# Contribution Guidelines

This document outlines the guidelines and best practices for contributing to the **KMIDS-UE5-V1-2025** project. Please read through this document before submitting any changes to the project.

---

## Git Flow

We follow **Git Flow** as our branching model to ensure a smooth collaboration and project management process. Below are the key elements:

### Main Branches

- **`main`**: This is the production-ready branch that always reflects the latest stable version of the project.
- **`develop`**: This is the integration branch where features are merged before being considered for production. All development work happens here.

### Supporting Branches

- **Feature Branches** (`feature/<feature-name>`): 
  - Created from the `develop` branch.
  - Used to develop new features or functionalities.
  - Naming convention: `feature/<feature-name>`
  - Once the feature is complete, it should be merged back into `develop`.
  
- **Release Branches** (`release/<version-number>`):
  - Created from `develop` when preparing for a new release.
  - Used for final tweaks, bug fixes, and documentation.
  - Once the release is ready, it should be merged into both `main` and `develop`.
  
- **Hotfix Branches** (`hotfix/<version-number>`):
  - Created from `main` to quickly fix issues in the production version.
  - After the fix is applied, it should be merged back into both `main` and `develop`.

### Example Workflow

1. **Start a new feature**:
   - Checkout `develop`:
     ```bash
     git checkout develop
     ```
   - Create a new feature branch:
     ```bash
     git checkout -b feature/feature-name
     ```
   - Implement your changes, then commit them.

2. **Finish a feature**:
   - After completing the feature, merge it back into `develop`:
     ```bash
     git checkout develop
     git merge feature/feature-name
     ```

3. **Release Preparation**:
   - When ready for a release, create a release branch from `develop`:
     ```bash
     git checkout -b release/v1.0 develop
     ```
   - Perform any final fixes or updates, then merge back into both `main` and `develop`.

4. **Hotfixes**:
   - When a bug is found in production, create a hotfix branch from `main`:
     ```bash
     git checkout -b hotfix/v1.0.1 main
     ```
   - Apply the fix, then merge it back into both `main` and `develop`.

### Git Flow Diagram

To better visualize the Git Flow model, refer to the diagram below:

![Git Flow Diagram](https://isdlab.psu.ac.th/images/Docker/git-flow.png)

By following this flow, we ensure that development is clean, organized, and aligned with best practices. Please always create a pull request for merging and provide clear descriptions of your changes.

---

## Folder Structure

This project follows a structured organization for both content and C++ code to ensure maintainability and scalability. Below is the folder structure:

### Content Folder
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

### C++ Folder
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
