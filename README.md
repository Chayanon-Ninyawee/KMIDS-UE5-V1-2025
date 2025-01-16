# KMIDS-UE5-V1-2025

This repository contains the latest development of the KMIDS Unreal Engine 5 (UE5) project for 2025. Below, you'll find details on how to contribute, clone the project, and work around issues related to Microsoft Azure DevOps Git LFS.

---

## Table of Contents
- [KMIDS-UE5-V1-2025](#kmids-ue5-v1-2025)
  - [Table of Contents](#table-of-contents)
- [Tutorial for Downloading All C++ Requirements for Unreal Engine 5 (Windows/Mac/Linux)](#tutorial-for-downloading-all-c-requirements-for-unreal-engine-5-windowsmaclinux)
  - [Windows Setup](#windows-setup)
    - [1. Install Epic Games Launcher](#1-install-epic-games-launcher)
    - [2. Install Unreal Engine 5](#2-install-unreal-engine-5)
    - [3. Install Visual Studio](#3-install-visual-studio)
    - [4. Set Up Git](#4-set-up-git)
  - [Mac Setup](#mac-setup)
    - [1. Install Epic Games Launcher](#1-install-epic-games-launcher-1)
    - [2. Install Unreal Engine 5](#2-install-unreal-engine-5-1)
    - [3. Install Xcode](#3-install-xcode)
    - [4. Install Homebrew (Optional but Recommended)](#4-install-homebrew-optional-but-recommended)
  - [Linux Setup (Ubuntu Example)](#linux-setup-ubuntu-example)
    - [1. Install Unreal Engine 5](#1-install-unreal-engine-5)
    - [2. Install Build Tools](#2-install-build-tools)
  - [Final Setup](#final-setup)
  - [Additional Notes](#additional-notes)
  - [Cloning the Repository](#cloning-the-repository)
    - [For Contributors](#for-contributors)
    - [For Non-Contributors](#for-non-contributors)
  - [Known Issues](#known-issues)
    - [Microsoft Azure DevOps Git LFS](#microsoft-azure-devops-git-lfs)

---

# Tutorial for Downloading All C++ Requirements for Unreal Engine 5 (Windows/Mac/Linux)

This guide will walk you through the necessary steps to download and set up all the tools and libraries required to run Unreal Engine 5 (UE5) C++ projects on Windows, Mac, and Linux. It will cover the installation of the Unreal Engine, Visual Studio (Windows), Xcode (Mac), or other necessary build tools for each platform.

---

## Windows Setup

### 1. Install Epic Games Launcher
1. Visit the [Epic Games website](https://www.unrealengine.com/download).
2. Download and install the Epic Games Launcher.
3. After installation, open the Epic Games Launcher and sign in with your Epic Games account.

### 2. Install Unreal Engine 5
1. In the Epic Games Launcher, go to the **Unreal Engine** tab.
2. Click **Install Engine** to download and install Unreal Engine 5 (UE5).

### 3. Install Visual Studio
Unreal Engine uses Visual Studio as the default IDE for Windows.

1. Visit the [Visual Studio download page](https://visualstudio.microsoft.com/downloads/).
2. Download **Visual Studio Community Edition** (or any other edition you prefer).
3. During installation, select the following components:
   - **Desktop development with C++**
   - **Game development with C++**
   - **Windows 10 SDK**
   - **.NET desktop development**
4. After installation, launch Visual Studio to complete the setup.
   
Helpful Youtube tutorial: https://youtu.be/HQDskHVw1to

### 4. Set Up Git
1. Download and install [Git](https://git-scm.com/download/win).
2. Open Git Bash and run the following commands to configure Git:
   ```bash
   git config --global user.name "Your Name"
   git config --global user.email "your.email@example.com"
   ```

---

## Mac Setup

### 1. Install Epic Games Launcher
1. Visit the [Epic Games website](https://www.unrealengine.com/download).
2. Download and install the Epic Games Launcher for macOS.
3. After installation, open the Epic Games Launcher and sign in with your Epic Games account.

### 2. Install Unreal Engine 5
1. In the Epic Games Launcher, go to the **Unreal Engine** tab.
2. Click **Install Engine** to download and install Unreal Engine 5 (UE5).

### 3. Install Xcode
Unreal Engine requires Xcode for compiling C++ code on macOS.

1. Open the **Mac App Store** and search for **Xcode**.
2. Install Xcode (ensure you have the latest version).
3. After installation, open Xcode and agree to the terms and conditions.
4. Install additional components by running the following command in the terminal:
   ```bash
   xcode-select --install
   ```

### 4. Install Homebrew (Optional but Recommended)
Homebrew is a package manager that simplifies the installation of various development tools.

1. Open the terminal and install Homebrew by running:
   ```bash
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```
2. After installation, you can use Homebrew to install packages like `git` and other dependencies.

---

## Linux Setup (Ubuntu Example)

### 1. Install Unreal Engine 5
1. Visit the [Unreal Engine Linux page](https://www.unrealengine.com/en-US/linux).
2. Download the Unreal Engine 5 zip file for Linux.
3. After the download is complete, extract the zip file to your desired directory.
   - You can use the following command in the terminal:
     ```bash
     unzip Linux_Unreal_Engine_X.X.X.zip -d /path/to/destination
     ```
4. Navigate to the extracted folder.
5. Run the Unreal Engine 5 executable:
   ```bash
   ./Engine/Binaries/Linux/UnrealEditor
   ```

### 2. Install Build Tools
1. Open a terminal and run the following command to install necessary build tools:
   ```bash
   sudo apt install build-essential
   sudo apt install clang
   sudo apt install git
   sudo apt install cmake
   ```

2. Additionally, install dependencies required by Unreal Engine:
   ```bash
   sudo apt install libvulkan1
   sudo apt install libxi6
   sudo apt install libxrandr2
   sudo apt install libx11-dev
   sudo apt install libfreetype6-dev
   ```

---

## Final Setup

After following the platform-specific steps, open **Unreal Engine 5** and ensure your C++ environment is correctly set up by creating a new C++ project. This will confirm that all required tools are properly installed.

---

## Additional Notes
- **For all platforms**, make sure to keep your operating system and development tools up to date.
- **UE5 Documentation**: Check the official [Unreal Engine Documentation](https://docs.unrealengine.com/) for more specific setup or troubleshooting steps.

---

Once everything is set up, you are ready to start developing with Unreal Engine 5 C++!



## Cloning the Repository

### For Contributors
If you are contributing to this project:
1. **Sign in to Azure DevOps using GitHub**:
   - Visit [Azure DevOps](https://dev.azure.com) and log in with your GitHub account.
   - Notify me (Chayanon Ninyawee) once you are signed in.
   - I will add you to the project.

2. **Access the Repository**:
   - Go to [Azure DevOps - KMIDS-UE5-V1-2025](https://dev.azure.com/Garfieldcmix/KMIDS-UE5-V1-2025).
   - Navigate to `Repos -> Files`.

3. **Generate Git Credential**:
   - Click Clone and select the option to Generate Git Credentials (this will provide a Personal Access Token or PAT for authentication).
   - Save the generated username and password securely.

4. **Clone the Repository**:
   - Use the following command to clone the repository:
     ```bash
     git clone https://github.com/Chayanon-Ninyawee/KMIDS-UE5-V1-2025.git
     ```
   - Example Output:
     ```
     Cloning into 'KMIDS-UE5-V1-2025'...
     remote: Enumerating objects: 519, done.
     remote: Counting objects: 100% (519/519), done.
     remote: Compressing objects: 100% (489/489), done.
     remote: Total 519 (delta 10), reused 519 (delta 10), pack-reused 0 (from 0)
     Receiving objects: 100% (519/519), 64.91 KiB | 633.00 KiB/s, done.
     Resolving deltas: 100% (10/10), done.
     ```
   - When prompted for credentials:
     ```
     Username for 'https://dev.azure.com': <Put_Your_Username_Here>
     Password for 'https://%20user@dev.azure.com': <Put_Your_Password_Here>
     ```

### For Non-Contributors
If you only want to clone the repository:
- **Wait for the release.**
- The release will be available on this page, and it will not require signing in to Azure DevOps or dealing with Git LFS.

---

## Known Issues

### Microsoft Azure DevOps Git LFS
There is currently a problem with Microsoft Azure DevOps Git LFS integration. This affects cloning the repository for users who are not explicitly added to the project.  
To avoid this issue, contributors must:
- Be added to the project by me.
- Ensure they have access to Git LFS through Azure DevOps.

---

Stay tuned for updates and releases! If you encounter any issues or have questions, feel free to create an issue in the GitHub repository.
