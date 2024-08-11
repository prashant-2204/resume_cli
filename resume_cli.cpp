#include <iostream>
#include <string>

using namespace std;

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

void showSkills() {
    printColorText("Skills:\n", "cyan");
    printColorText("- Programming: JavaScript, TypeScript, C++, Rust, Dart, Python, GoLang\n", "yellow");
    printColorText("- Web Development: React, Next.js, HTML, CSS, Node, Express\n", "yellow");
    printColorText("- DevOps: Docker, Kubernetes, AWS (EC2, S3, ECR, ECS)\n", "yellow");
    printColorText("- Database: MongoDB, Redis\n", "yellow");
    printColorText("- Tools: Git, WebSockets, Tableau, Machine Learning\n", "yellow");
}

void showEducation() {
    printColorText("Education:\n", "cyan");
    printColorText("SRM Institute of Science & Technology, Chennai, India (Sept 2021 – Present)\n", "yellow");
    printColorText("- Current CGPA: 9.17/10\n", "yellow");
    printColorText("- Relevant Coursework: Data Structures and Algorithms, DBMS, Computer Networking, Machine Perception and Cognition\n", "yellow");
}

void showExperience() {
    printColorText("Experience:\n", "cyan");
    printColorText("ReFlow Technologies, Chennai, India (June 2024 – Present)\n", "yellow");
    printColorText("- Web Developer\n", "yellow");
    printColorText("- Engineered a full stack application with a user dashboard to display real-time sensor data using MQTT protocol\n", "yellow");
    printColorText("- Reduced latency by 25%, ensuring timely and accurate data visualization for over 2,000 users.\n", "yellow");
    printColorText("- Deployed web services on AWS, increasing system uptime by 20%.\n", "yellow");
}

void showProjects() {
    printColorText("Projects:\n", "cyan");
    printColorText("Vercel Deployment Platform\n", "yellow");
    printColorText("- Engineered a deployment platform for frontend applications with automated Docker container management\n", "yellow");
    printColorText("WebRTC Zoom Clone (zoom.prashant.fun)\n", "yellow");
    printColorText("- Built a scalable peer-to-peer connection-based Zoom clone using WebRTC\n", "yellow");
    printColorText("Real-time Tracker (tracker.prashant.fun)\n", "yellow");
    printColorText("- Created a highly accurate real-time tracking application with interactive maps and data visualization.\n", "yellow");
    printColorText("AI-ChatBot (ai.prashant.fun)\n", "yellow");
    printColorText("- Engineered an AI chat bot capable of handling multiple requests concurrently with high efficiency.\n", "yellow");
    printColorText("E-commerce Platform (ecommerce.prashant.fun)\n", "yellow");
    printColorText("- Developed a full-featured e-commerce site with authentication, admin panel, and session-based security.\n", "yellow");
}

void showContact() {
    printColorText("Contact Information:\n", "cyan");
    printColorText("Email: prashantair10@gmail.com\n", "yellow");
    printColorText("Phone: +91 6203871822\n", "yellow");
    printColorText("Portfolio: portfolio.prashnat.fun\n", "yellow");
    printColorText("LinkedIn: linkedin.com/in/prashant-9b5935229\n", "yellow");
    printColorText("GitHub: github.com/prashant-2204\n", "yellow");
}

int main() {
    int choice;
    do {
        printColorText("\nPrashant Kumar's Resume\n", "blue");
        printColorText("1. Skills\n", "cyan");
        printColorText("2. Education\n", "cyan");
        printColorText("3. Experience\n", "cyan");
        printColorText("4. Projects\n", "cyan");
        printColorText("5. Contact Information\n", "cyan");
        printColorText("6. Exit\n", "cyan");
        printColorText("Enter your choice: ", "yellow");
        cin >> choice;

        switch (choice) {
            case 1: showSkills(); break;
            case 2: showEducation(); break;
            case 3: showExperience(); break;
            case 4: showProjects(); break;
            case 5: showContact(); break;
            case 6: printColorText("Exiting...\n", "green"); break;
            default: printColorText("Invalid choice. Try again.\n", "red");
        }
    } while (choice != 6);

    return 0;
}
