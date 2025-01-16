# KMIDS-UE5-V1-2025

This repository contains the latest development of the KMIDS Unreal Engine 5 (UE5) project for 2025. Below, you'll find details on how to contribute, clone the project, and work around issues related to Microsoft Azure DevOps Git LFS.

---

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
