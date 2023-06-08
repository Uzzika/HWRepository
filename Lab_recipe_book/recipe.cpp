#include <string>
#include <vector> //модель динамического массива
#include <iostream>
#include <Windows.h>
#include <conio.h>


class FIO {
private:
    std::string _name;
    std::string _surname;
    std::string _lastName;

public:
    FIO(std::string name, std::string surname, std::string lastName) :
        _name(name), _surname(surname), _lastName(lastName) {};

    std::string get_name() const {
        return _name;
    }

    std::string get_surname() const {
        return _surname;
    }

    std::string get_lastName() const {
        return _lastName;
    }

    FIO& operator=(const FIO& fio) {
        _name = fio.get_name();
        _surname = fio.get_surname();
        _lastName = fio.get_lastName();
        return *this;
    }

    bool operator==(const FIO& fio) const {
        return _name == fio.get_name() &&
            _surname == fio.get_surname() &&
            _lastName == fio.get_lastName();
    };

    friend std::ostream& operator<<(std::ostream& out, const FIO& fio) {
        out << fio._name << " " << fio._surname << " " << fio._lastName << "\n";
        return out;
    }

    friend std::istream& operator>> (std::istream& in, FIO& fio) {
        in >> fio._name;
        in >> fio._surname;
        in >> fio._lastName;
        return in;
    }
};



class Ingridient {
public:
    Ingridient(std::string name, size_t count, std::string measureUnit) :
        _name(name), _count(count), _measureUnit(measureUnit) {};

    void set_count(size_t count) {
        _count = count;
    }

    void add_analog(const Ingridient analog) {
        _analogs.push_back(analog);
    }

    std::string get_name() const {
        return _name;
    }

    bool operator==(const Ingridient& ing) const {
        return _name == ing.get_name();
    };

    friend std::ostream& operator<<(std::ostream& out, const Ingridient& ing) {
        out << "-" << ing._name << " (" << ing._count << " " << ing._measureUnit << ")";
        out << "\n";

        if (ing._analogs.size() > 0) {
            out << "Аналоги: \n";
        }
        for (size_t i = 0; i < ing._analogs.size(); i++) { 
            out << ing._analogs[i];
        }
        return out;
    }

private:
    std::string _name;
    std::string _measureUnit;
    size_t _count;
    std::vector<Ingridient> _analogs; //задаю вектор ингридиентов
};


class Recipe {
public:
    Recipe(std::string name, std::string desc, std::vector<Ingridient> ingridients = {}) :
        _name(name), _description(desc), _ingridients(ingridients) {};

    void add_ingridient(const Ingridient ing) {
        _ingridients.push_back(ing);
    }

    std::string get_name() const {
        return _name;
    }

    std::string get_description() const {
        return _description;
    }

    std::vector<Ingridient> get_ingridients() const {
        return _ingridients;
    }

    bool operator==(const Recipe& recipe) const {
        return _name == recipe.get_name() &&
            _description == recipe.get_description();
    };

    friend std::ostream& operator<<(std::ostream& out, const Recipe& recipe) {
        out << ">>>>>" << recipe._name << "<<<<<<" << "\n";

        for (size_t i = 0; i < recipe._ingridients.size(); i++) {
            out << "   " << recipe._ingridients[i];
        }
        out << "\n" << "  " << recipe._description << "\n";
        return out;
    }

private:
    std::string _name;
    std::string _description;
    std::vector<Ingridient> _ingridients;
};


class Book {
public:
    Book(std::string name, FIO author, std::string publisher, std::string date) :
        _name(name), _author(author), _publisher(publisher), _date(date) {};

    void addRecipe(const Recipe recipe) {
        _recipes.push_back(recipe);
    }

    void removeRecipe(const size_t index) {
        if (index < _recipes.size()) {
            _recipes.erase(_recipes.begin() + index); 
        }
    }

    Book& operator=(const Book& book) {
        _name = book._name;
        _publisher = book._publisher;
        _date = book._date;
        _author = book._author;
        _recipes = book._recipes;
        return *this;
    }

    std::string get_name() const {
        return _name;
    }

    std::string get_publisher() const {
        return _publisher;
    }

    std::string get_date() const {
        return _date;
    }

    FIO get_author() const {
        return _author;
    }

    std::vector<Recipe> get_recipes() const {
        return _recipes;
    }

    bool operator==(const Book& book) const {
        return _name == book.get_name() &&
            _publisher == book.get_publisher() &&
            _date == book.get_date() &&
            _author == book.get_author() &&
            _recipes == book.get_recipes();
    };

    friend std::ostream& operator<<(std::ostream& out, const Book& book) {
        out << "=======BOOK [" << book.get_name() << "]=======\n" <<
            "Publisher: " << book.get_publisher() << "\n" <<
            "Date of writing: " << book.get_date() << "\n" <<
            "Author: " << book.get_author() << "\n" <<
            "-------Recipes list-------\n";

        std::vector<Recipe> recipes = book.get_recipes();
        for (size_t i = 0; i < recipes.size(); i++) {
            out << recipes[i] << "\n";
        }

        out << "Приятного аппетита!\n";
        out << "========================\n";

        return out;
    }

private:
    std::string _name;
    std::string _publisher;
    std::string _date;
    FIO _author;
    std::vector<Recipe> _recipes;
};

int main() {
    SetConsoleCP(1251);//русский
    SetConsoleOutputCP(1251);
    FIO author("Дудченко", "Олеся", "Викторовна");

    Recipe first_recipe("Греческий салат", "Перемешать все ингридиенты и кушац с удовольствием");
    Ingridient cucumber("Огурцы", 2, "шт.");

    Ingridient olives("Оливки", 15, "шт.");
    Ingridient analogoliv("Маслины", 15, "шт.");

    Ingridient salad("Салат Айсберг", 2, "листка");
    Ingridient analogsalad1("Листья салата", 10, "листьев");
    Ingridient analogsalad2("Пекинская капуста", 3, "листка");

    Ingridient cheese("Сыр фета", 15, "кубиков");
    Ingridient analogche("Сыр брынза", 23, "кубика");

    Ingridient sweet_pepper("Болгарский перец", 1, "шт.");
    Ingridient salt("Соль, перец и масло", 3, "по вкусу");

    olives.add_analog(analogoliv);
    salad.add_analog(analogsalad1);
    salad.add_analog(analogsalad2);
    cheese.add_analog(analogche);
    first_recipe.add_ingridient(cucumber);
    first_recipe.add_ingridient(olives);
    first_recipe.add_ingridient(salad);
    first_recipe.add_ingridient(cheese);
    first_recipe.add_ingridient(sweet_pepper);
    first_recipe.add_ingridient(salt);


    Recipe second_recipe("Макароны с сосиской", "Перемешать макароны с маслом и красиво положить сосиски");
    Ingridient pasta("Макароны", 1, "пачка");

    Ingridient sausage("Сосиска", 2, "шт.");
    Ingridient frankfurter("Сарделька", 2, "шт.");

    Ingridient oil("Масло", 15, "мл");

    sausage.add_analog(frankfurter);
    second_recipe.add_ingridient(pasta);
    second_recipe.add_ingridient(sausage);
    second_recipe.add_ingridient(oil);

    Book book("Рецепты от пожилой кукарачи", author, "ООО ЖМА", "10.04.2023");
    book.addRecipe(first_recipe);
    book.addRecipe(second_recipe);
    /*book.removeRecipe(0);*/

    std::cout << book;
    system("pause");
    return 0;
}