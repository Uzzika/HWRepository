#include <stdio.h>;
#include <string.h>;

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
	float height, width, length;
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
struct dish {
	char ingredients, title;
	struct BGYK pasta;
};
struct student {
	char title_univ;
	int course;
	struct copybook chechik;
};
struct patient {
	struct body_parameters chechik;
	struct fio chechik;
	char disease;
};
struct TV
{
	char firm[30];
	char type[30];
	int diagonal;
	int hertz;
	int height;
	int depth;
	int width;
	int weight;
};
struct f_member {
	int age;
	char position, name;
};

void input_bookshop(struct book_shop* abob) {
	printf("Input year of release: ");
	scanf_s("%d", &abob->year);
	printf("Input number of pages: ");
	scanf_s("%d", &abob->c_str); 
	printf("Input article number: ");
	scanf_s("%d", &abob->art);
	printf("Input author's name: ");
	scanf_s("%c", &abob->author);
	printf("Input title of the book: ");
	scanf_s("%c", &abob->title);
	printf("Input name of the publishing house: ");
	scanf_s("%c", &abob->publish);
}
void input_fio(struct fio* names) {
	printf("Input name: ");
	scanf_s("%c", &names->name);
	printf("Input surname: ");
	scanf_s("%c", &names->surname);
	printf("Input patronymic: ");
	scanf_s("%c", &names->patr);
}
void input_telek(struct telek* dim) {
	printf("Input height: ");
	scanf_s("%f", &dim->height);
	printf("Input width: ");
	scanf_s("%f", &dim->width);
	printf("Input length: ");
	scanf_s("%f", &dim->length);
	printf("Input TV manufacturer: ");
	scanf_s("%c", &dim->manufac);
}
void input_time(struct time* chto) {
	printf("Input hour: ");
	scanf_s("%d", &chto->hour);
	printf("Input minute: ");
	scanf_s("%d", &chto->minute);
	printf("Input second: ");
	scanf_s("%d", &chto->second);
}

int main() {
	struct dimensions obj = { 3, 2, 4 };
	struct book_shop book = { 2018, 265, 100879, "Geksli", "Snow", "IITMM" };
	struct BGYK peeaeple = { 14, 6, 23, 300.4 };
	struct fio chech = { "Dmitriy", "Hovanski", "Dyrak" };
	struct copybook tetradochka = { "ErichKrause", "square", 65 };
	struct time now = { 23, 59, 21 };
	struct jeans shtany = { 48, 2100, 110 };
	struct telek shtuka = { 0.5, 0.15, 1, "Samsung" };
	struct body_parameters chechick = { 102, 87, 106, 180 };
	struct worker ne_ya = { {"Dmitriy", "Hovanski", "Dyrak"}, 7, 9, 2018, 10970, 919092, "Ingeneer" };

	struct dish* bs[100]; // рецепт
	struct dish first = {"pasta", "boloneze", {3, 5, 4, 800.0}}, second = { "pastaA", "carbonara", {45, 2, 23, 1200.0} }, last = { "pastaaa", "orzo", {34, 12, 5, 950.0} };

	bs[0]->ingredients = first.ingredients;
	bs[0]->title = first.title;
	bs[0]->pasta = first.pasta;

	bs[1]->ingredients = second.ingredients;
	bs[1]->title = second.title;
	bs[1]->pasta = second.pasta;

	bs[2]->ingredients = last.ingredients;
	bs[2]->title = last.title;
	bs[2]->pasta = last.pasta;

	struct f_member* mem[100]; // семья
	struct f_member fir = { 22, "mother", "Mary" }, sec = { 24, "father", "John"}, las = { 1, "daughter", "Missi"};

	mem[0]->age = fir.age;
	mem[0]->position = fir.position;
	mem[0]->name = fir.name;

	mem[1]->age = sec.age;
	mem[1]->position = sec.position;
	mem[1]->name = sec.name;

	mem[2]->age = las.age;
	mem[2]->position = las.position;
	mem[2]->name = las.name;
	
	return 0;

}

struct Dimension {
	int height, depth, width;
};

void input(struct Dimension* sizes) {
	printf("Input cabinet width: ");
	scanf_s("%d", &sizes->width);
	printf("Input cabinet height: ");
	scanf_s("%d", &sizes->height);
	printf("Input cabinet depth : ");
	scanf_s("%d", &sizes->depth);
}

int calculateSquare(struct Dimension sizes) {
	int square_bokovie, square_updown, square_front, square;

	square_bokovie = 2 * sizes.height * sizes.depth;

	square_updown = 2 * sizes.width * sizes.depth;

	square_front = sizes.height * sizes.width;
	square = square_bokovie + square_updown + square_front;
	
	return square;
}

int calculateVolume(struct Dimension sizes) {
	int V = sizes.height * sizes.depth * sizes.width;
	return V;
}

float calculateDye(struct Dimension sizes, float consumption) {

	int square = calculateSquare(sizes);

	float dye_needed = square * consumption; 
	return dye_needed;
}

float calculatePaintingCost(struct Dimension sizes, float consumption, float
	workCost, float paintCost) {

	float paint_price = calculateDye(sizes, consumption) * paintCost;
	float work_price = calculateDye(sizes, consumption) * workCost;
	float painting_cost = paint_price + work_price;
	return painting_cost;
}

float calculateCupboardCost(struct Dimension sizes, float cupboardCost) {
	float cabinet_cost = calculateSquare(sizes) * cupboardCost;
	return cabinet_cost;
}

float calculateCabinetMass(struct Dimension sizes, float weight) {
	float cabinet_mass = calculateSquare(sizes) * weight;
	return cabinet_mass;
}

float calculateLiftingCost(struct Dimension sizes, float weight, int floorsCount, float riseCost) {
	float LiftingCost = calculateCabinetMass(sizes, weight) * floorsCount * riseCost;
	return LiftingCost;
}

float calculateCost(struct Dimension sizes, float cupboardCost, float consumption, float paintCost,
	float workCost, float weight, int floorsCount, float riseCost, float deliveryCost) {
	float full_cost = calculatePaintingCost(sizes, consumption, workCost, paintCost) +
		calculateCupboardCost(sizes, cupboardCost) + calculateLiftingCost(sizes, weight, floorsCount, riseCost) + deliveryCost;
	return full_cost;
}

int main() {
	// расход краски, стоимость работы по покраске, стоимость краски
	float paintConsumption = 0.8, paintWorkCost = 35.00, paintCost = 50.00;
	// стоимость материала шкафа за м2
	float cupboardCost = 650;
	// вес кг/м2
	float weight = 0.9;
	// число этажей
	int floorsCount = 5;
	float deliveryCost = 500.00;
	float riseCost = 2.50;
	struct Dimension cupboard;
	printf("CUPBOARD PARAMETERS\n");
	input(&cupboard);
	float cost, cupboard_cost, painting_cost, delivery_cost;
	cost = calculateCost(cupboard, cupboardCost, paintConsumption,
		paintCost, paintWorkCost, weight, floorsCount, riseCost, deliveryCost);
	cupboard_cost = calculateCupboardCost(cupboard, cupboardCost);
	painting_cost = calculatePaintingCost(cupboard, paintConsumption, paintWorkCost, paintCost);
	delivery_cost = calculateLiftingCost(cupboard, weight, floorsCount, riseCost) + deliveryCost;
	printf("Cost by position:\n  - cupboard cost:%.2f\n  - painting cost:%.2f\n  - delivery cost(with rise)%.2f:\nTotal cost: %.2f",
		cupboard_cost, painting_cost, delivery_cost, cost);
	return 0;
}
