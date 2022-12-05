#include <stdio.h>

struct dimensions {
	int height, width, length;
};
struct book_shop {
	int year, c_str, art;
	char author, title, publish;
};
struct BGYK {
	int fiber, fats, carb;
	float cal;
};
struct fio {
	char name, surname, patr;
};
struct copybook {
	char manufac, line_type;
	int price;
};
struct time {
	int hour, minute, second;
};
struct jeans {
	int size, price, length;
};
struct telek {
	int height, width, length;
	char manufac;
};
struct body_parameters {
	int chest_girth, waist_girth, hip_girth, height;
};
struct worker {
	struct fio work; 
	int day, mounth, year;
	float salary;
	int unique_number;
	char post;
};
int main() {
	struct dimensions obj = { 3, 2, 4 };
	struct book_shop book = { 2018, 265, 100879, "Geksli", "Snow", "IITMM" };

}