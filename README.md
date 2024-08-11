# Resume Display Program

## Overview

This C++ program provides an interactive, text-based interface for displaying a resume with color-coded sections. Users can view different sections such as Skills, Education, Experience, Projects, and Contact Information.

## Features

- **Color-coded Text:** Each section and choice is displayed in different colors for improved readability.
- **Interactive Menu:** Users can navigate through various sections of the resume.
- **Detailed Information:** Provides detailed information about skills, education, experience, projects, and contact details.

## Code Explanation

### `printColorText` Function

This function prints text in different colors based on the input color string using ANSI escape codes.

```cpp
void printColorText(string text, string color) {
    string colorCode;

    if (color == "red")
        colorCode = "\033[1;31m";
    else if (color == "green")
        colorCode = "\033[1;32m";
    else if (color == "yellow")
        colorCode = "\033[1;33m";
    else if (color == "blue")
        colorCode = "\033[1;34m";
    else if (color == "magenta")
        colorCode = "\033[1;35m";
    else if (color == "cyan")
        colorCode = "\033[1;36m";
    else
        colorCode = "\033[0m"; // Reset color

    cout << colorCode << text << "\033[0m";
}
