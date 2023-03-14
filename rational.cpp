int gcd(int x, int y) {
	while (x != y) {
		if (x > y) { x = x - y; }
		else { y = y - x; }
	}
	return y;
}
int lcm(int x, int y) {
	return x * y / gcd(x, y);
}

enum rationalERRORDiv {
	DivisionByZero
};
class rational {
protected:
	int numerator;
	int denumerator;
 public:
	 rational(int _numerator, int _denumerator) { // констуктор присвоения
		 numerator = _numerator;
		 denumerator = _denumerator;
	 }
	 rational(const rational& num) { // конструктор копирования
		 numerator = num.numerator;
		 denumerator = num.denumerator;
	 }
	 rational() :denumerator(1), numerator(0){}; //конструктор по умолчанию

	 int getNumerator() { return numerator; }
	 int getDenumerator() { return denumerator; }
	 void setNumerator(int _numerator) { numerator = _numerator; }
	 void setDenumerator(int _denumerator) {
		 if (_denumerator != 0) { denumerator = _denumerator; }
		 else { throw DivisionByZero; }
	 }

	 void rationalAdd(const rational& NUM) {
		 int NOD = gcd(NUM.denumerator, this->denumerator);
		 this->numerator = this->numerator * (NOD / this->denumerator) + NUM.numerator * (NOD / denumerator);
		 this->denumerator = NOD;
	 }
	 void rationalSubtraction(const rational& NUM) {
		 int NOD = gcd(NUM.denumerator, this->denumerator);
		 this->numerator = this->numerator * (NOD / this->denumerator) - NUM.numerator * (NOD / denumerator);
		 this->denumerator = NOD;
	 }
	 void rationalMultiply(const rational& NUM) {
		 this->numerator = this->numerator * NUM.numerator;
		 this->denumerator *= NUM.denumerator;
	 }
	 void rationalDivision(const rational& NUM) {
		 this->denumerator = this->denumerator * NUM.numerator;
		 this->numerator *= NUM.denumerator;
	 }
	 void rationalSimplify(const rational& NUM) {
		 int NOK = lcm(this->numerator, this->denumerator);
		 this->numerator = this->numerator / NOK;
		 this->denumerator = this->denumerator / NOK;
	 }
 };

class rationalWithIntPart : public rational {
	int intPart;
public:
	int getIntPart() { return this-> intPart; }
	void setIntPart(int intPart) { this-> intPart = intPart; }
	rationalWithIntPart() = default;
	rationalWithIntPart(int _IntPart, int _Denum, int _Num) {
		if (_Denum != 0) {
			this->setDenumerator(_Denum);
			this->setNumerator(_Num);
			this->intPart = _IntPart;
		}
		else { throw DivisionByZero; }
	};
	rationalWithIntPart(const rationalWithIntPart& NUMBER) {
		this->setDenumerator(NUMBER.denumerator);
		this->setNumerator(NUMBER.numerator);
		this->intPart = NUMBER.intPart;
	};

	void rationalSelectInt(const rationalWithIntPart& NUMBER) {
		this->intPart = this->getNumerator() / this->getDenumerator();
		this->setNumerator(this->getNumerator() % this->getDenumerator());
	}
};
void main() {

}
