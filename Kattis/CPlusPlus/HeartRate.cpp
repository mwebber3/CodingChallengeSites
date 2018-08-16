#include <iostream>

void reset(double, double, double, double, double);

int main() {
	int i, cases;
	double b, p, minABPM, maxABPM, calcBPM;

	std::cin >> cases;

	for (i = 0; i < cases; i++) {
		std::cin >> b >> p;
		minABPM = (60.0 / (p / (b - 1)));
		maxABPM = (60.0 / (p / (b + 1)));
		calcBPM = ((60.0 * b) / p);
		std::printf("%.4f %.4f %.4f \n", minABPM, calcBPM, maxABPM);
		reset(b, p, minABPM, maxABPM, calcBPM);
	}

	std::cin.get();
	std::cin.ignore();
	return 0;
}

void reset(double b, double p, double minABPM, double maxABPM, double calcBPM) {
	b = 0.0;
	p = 0.0;
	minABPM = 0.0;
	maxABPM = 0.0;
	calcBPM = 0.0;
}
