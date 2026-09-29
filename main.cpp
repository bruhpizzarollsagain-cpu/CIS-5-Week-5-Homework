#include <iostream>

// Homework 5 — Mason Ayala
// CIS 5 Week 05 · Rule engine lite

int main() {
	int score = 0;
	int attendance = 0;
	std::cout << "Score? ";
	std::cin >> score;
	std::cout << "Attendance? ";
	std::cin >> attendance;
	bool closeScore = score >= 60 && score < 70;
	bool attendanceWarning = score >= 70 && attendance < 80;
	// Score warning edges: 59, 60, 61
	// Score passing edges: 69, 70, 71
	// Attendance edges: 79, 80, 81
	if (score < 0 || score > 100 || attendance < 0 || attendance > 100) {
		std::cout << "Result: invalid input\n";
	}
	else if (score >= 70 && attendance >= 80) {
		std::cout << "Result: pass\n";
	}
	else if (closeScore || attendanceWarning) {
		std::cout << "Result: warning\n";
	}
	else {
		std::cout << "Result: fail\n";
	}
	// TODO: two comments that explain a choice (why invalid first, why && not ||, why >= not >)
	// Invalid input comes first so out-of-range values do not enter the normal rules.

	// Passing uses && because both the score and attendance requirements must be met.

	return 0;
}
