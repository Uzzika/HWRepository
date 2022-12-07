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

	struct dimensions* bs[100];
	struct dimensions first = { 3, 5, 4 }, second = { 3, 4, 1 }, last = { 9, 4, 2 };

	bs[0]->height = first.height;
	bs[0]->width = first.width;
	bs[0]->length = first.length;

	bs[0]->height = second.height;
	bs[0]->width = second.width;
	bs[0]->length = second.length;

	bs[0]->height = last.height;
	bs[0]->width = last.width;
	bs[0]->length = last.length;
	
	struct TV* size;
	Input(&size);
	diagonal(&size);
	square(&size);
	volume(&size);

	return 0;

}
struct Dimension { // шкаф (описываетс€ габаритами)
	int height;
	int depth;
	int width;
};
// ввод параметров шкафа
void input(struct Dimension* sizes) {
	printf("Enter cabinet width: ");
	scanf_s("%d", &(*sizes).width);
	printf("Enter cabinet height: ");
	scanf_s("%d", &(*sizes).height);
	printf("Enter cabinet depth : ");
	scanf_s("%d", &(*sizes).depth);
}
// расчЄт поверхности шкафа
int calculateSquare(struct Dimension sizes) {
	int square_bok, square_updown, square_front, square;
	// 2 боковые крышки
	square_bok = 2 * sizes.height * sizes.depth;
	// верхн€€ и нижн€€ крышки
	square_updown = 2 * sizes.width * sizes.depth;
	// 1 передн€€ крышка
	square_front = sizes.height * sizes.width;
	square = square_bok + square_updown + square_front;
	return square;
}
// расчЄт объЄма шкафа
int calculateVolume(struct Dimension sizes) {
	int V = sizes.height * sizes.depth * sizes.width;
	return V;
}
// расчЄт сколько краски нужно на весь шкаф
// consumption Ц расход краски на м2
float calculateDye(struct Dimension sizes, float consumption) {
	// с помощью написанной ранее функции вычисл€ем площадь поверхности
	int square = calculateSquare(sizes);
	// зна€ расход и площадь вычисл€ем сколько краски нужно
	float dye_needed = square * consumption;
	return dye_needed;
}
float calculatePaintingCost(struct Dimension sizes, float consumption, float
	workCost, float paintCost) {
	// ваш код
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
