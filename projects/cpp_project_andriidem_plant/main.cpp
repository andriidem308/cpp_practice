/***
 *
 * Project name: Plant
 * File: main.cpp
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/


#include "SomeFunctions.cpp"
#include "src/Employer.cpp"


int main() {
	string file_in_path = "../file_in.txt";
	string test_file_in_path = "../file_in_test.txt";
	string path_to_file_in;

	bool isTest = 0;
	(isTest) ? path_to_file_in = test_file_in_path : path_to_file_in = file_in_path;

	ifstream FILE_IN(path_to_file_in);
	ofstream FILE_OUT("../FILE_OUT.txt");

	// If file path is invalid - Error and exit the program
	if (!FILE_IN){
		cout << "   *****\n   File is not opened!\n   *****";
		return -1;
	}

	// flags for determine I/O modes
	bool consoleInputMode;
	bool consoleOutputMode;

	string OUTPUT = "";
	string cool_sep = " *  *  *";
	string cool_line = "---------------------------------\n";
	string very_cool_line = "\n=================================\n\n";

	// Choosing I/O modes (Console or from/to File)
	cout << cool_line << "Choose INPUT MODE.\n0 - FILE MODE\n1 - CONSOLE MODE\nYour choice: " << endl;
	cin >> consoleInputMode;
	cout << cool_line << "Choose OUTPUT MODE.\n0 - FILE MODE\n1 - CONSOLE MODE\nYour choice: " << endl;
	cin >> consoleOutputMode;


	// for readable code
	if (consoleInputMode) cout << very_cool_line;

	// for convenient realisation
	vector<vector<string>> products_vector;
	vector<vector<string>> professions_vector;
	vector<vector<string>> equipment_vector;
	vector<vector<string>> employees_vector;
	vector<vector<string>> employers_vector;

	// (number of)
	// k - products, l - professions, m - equipments, n - employees, h - employers
	int k, l, m, n, h;


	// ============= ========== FILE/CONSOLE I/O REALISATION ========= =============
	if(consoleInputMode){

		cout << "Number of products: ";
		cin.ignore();
		cin >> k;
		cout << cool_sep << endl << " ";
		products_vector = ltovs(k);

		cout << cool_line;
		cout << "Number of professions: ";
		cin >> l;
		cout << cool_sep << endl << " ";
		professions_vector = ltovs(l);

		cout << cool_line;
		cout << "Amount of equipment: ";
		cin >> m;
		cout << cool_sep << endl << " ";
		equipment_vector = ltovs(m);

		cout << cool_line;
		cout << "Number of employees: ";
		cin >> n;
		cout << cool_sep << endl << " ";
		employees_vector = ltovs(n);

		cout << cool_line;
		cout << "Number of employers: ";
		cin >> h;
		cout << cool_sep << endl << " ";
		employers_vector = ltovs(h);

	}
	else {
		string k_s, l_s, m_s, n_s, h_s;

		// Products
		getline(FILE_IN, k_s);
		k = stoi(k_s);
		products_vector = ltovs_f(k, &FILE_IN);

		// Professions
		getline(FILE_IN, l_s);
		l = stoi(l_s);
		professions_vector = ltovs_f(l, &FILE_IN);

		// Equipment
		getline(FILE_IN, m_s);
		m = stoi(m_s);
		equipment_vector = ltovs_f(m, &FILE_IN);

		// Employees
		getline(FILE_IN, n_s);
		n = stoi(n_s);
		employees_vector = ltovs_f(n, &FILE_IN);

		// Employers
		getline(FILE_IN, h_s);
		h = stoi(h_s);
		employers_vector = ltovs_f(h, &FILE_IN);

		(void)0;
	}
	// ============= ========== ======== ========== ============= ==================

//* (begin)
	// ------------------------------ PRODUCTS -------------------------------------
	auto *product_1 = new Product(products_vector[0][0],
			stoi(products_vector[0][1]),
			stod(products_vector[0][2]));
	auto *product_2 = new Product(products_vector[1][0],
			stoi(products_vector[1][1]),
			stod(products_vector[1][2]));
	auto *product_3 = new Product(products_vector[2][0],
			stoi(products_vector[2][1]),
			stod(products_vector[2][2]));
	// -----------------------------------------------------------------------------

	// ------------------------------ PROFESSIONS ----------------------------------
	auto *profession_1 = new Profession(professions_vector[0][0],
			stod(professions_vector[0][1]));
	auto *profession_2 = new Profession(professions_vector[0][0],
			stod(professions_vector[1][1]));
	// -----------------------------------------------------------------------------

	// ------------------------------ EQUIPMENTS -----------------------------------
	auto *equipment_1 = new Equipment(equipment_vector[0][0],
			stoi(equipment_vector[0][1]),
			stod(equipment_vector[0][2]));
	auto *equipment_2 = new Equipment(equipment_vector[1][0],
			stoi(equipment_vector[1][1]),
			stod(equipment_vector[1][2]));
	auto *equipment_3 = new Equipment(equipment_vector[2][0],
			stoi(equipment_vector[2][1]),
			stod(equipment_vector[2][2]));
	auto *equipment_4 = new Equipment(equipment_vector[3][0],
			stoi(equipment_vector[3][1]),
			stod(equipment_vector[3][2]));
	auto *equipment_5 = new Equipment(equipment_vector[4][0],
			stoi(equipment_vector[4][1]),
			stod(equipment_vector[4][2]));

	vector<Equipment*>
		personal_equipment_vector_1 = {equipment_1, equipment_2},
		personal_equipment_vector_2 = {equipment_1, equipment_2, equipment_4},
		personal_equipment_vector_3 = {equipment_1, equipment_2, equipment_5},
		personal_equipment_vector_4 = {equipment_1, equipment_3},
		personal_equipment_vector_5 = {equipment_1, equipment_5},
		personal_equipment_vector_6 = {equipment_1, equipment_3, equipment_5};
	// -----------------------------------------------------------------------------

	// ------------------------------ EMPLOYEES ------------------------------------
	auto *employee_1 = new Employee(employees_vector[0][0],employees_vector[0][1],
	                                stoi(employees_vector[0][2]),
	                                stoi(employees_vector[0][3]),
	                                product_1, profession_2,
	                                personal_equipment_vector_1);
	auto *employee_2 = new Employee(employees_vector[1][0], employees_vector[1][1],
	                                stoi(employees_vector[1][2]),
	                                stoi(employees_vector[1][3]),
	                                product_3, profession_2,
	                                personal_equipment_vector_2);
	auto *employee_3 = new Employee(employees_vector[2][0], employees_vector[2][1],
	                                stoi(employees_vector[2][2]),
	                                stoi(employees_vector[2][3]),
	                                product_2, profession_1,
	                                personal_equipment_vector_3);
	auto *employee_4 = new Employee(employees_vector[3][0], employees_vector[3][1],
	                                stoi(employees_vector[3][2]),
	                                stoi(employees_vector[3][3]),
	                                product_1, profession_2,
	                                personal_equipment_vector_4);
	auto *employee_5 = new Employee(employees_vector[4][0], employees_vector[4][1],
	                                stoi(employees_vector[4][2]),
	                                stoi(employees_vector[4][3]),
	                                product_2, profession_1,
	                                personal_equipment_vector_5);
	auto *employee_6 = new Employee(employees_vector[5][0], employees_vector[5][1],
	                                stoi(employees_vector[5][2]),
	                                stoi(employees_vector[5][3]),
	                                product_3, profession_2,
	                                personal_equipment_vector_6);

	vector<Employee*> employees_list_1 = {employee_1, employee_2, employee_4};
	vector<Employee*> employees_list_2 = {employee_3, employee_5, employee_6};
	// -----------------------------------------------------------------------------


	// ------------------------------ EMPLOYERS ------------------------------------
	auto *employer_1 = new Employer(employers_vector[0][0], employers_vector[0][1],
	                                stoi(employers_vector[0][2]),
	                                stoi(employers_vector[0][3]),
	                                employees_list_1);
	auto *employer_2 = new Employer(employers_vector[1][0], employers_vector[1][1],
	                                stoi(employers_vector[1][2]),
	                                stoi(employers_vector[1][3]),
	                                employees_list_2);

	vector<Employer*> employers_list = {employer_1, employer_2};
	// -----------------------------------------------------------------------------
//* (end)

	/* Commented Code below was used while testing some methods
	 * May be used for speed-checking my project
	 * You have to make commented the code inside "//* ... //*"
	 * Also you have to go to the top of this file and change
	 * the bool variable "isTest" to 1
/*

	auto *test_product = new Product(products_vector[0][0],
	                                 stoi(products_vector[0][1]),
	                                 stod(products_vector[0][2]));
	auto *test_profession = new Profession(professions_vector[0][0],
	                                       stod(professions_vector[0][1]));
	auto *test_equipment = new Equipment(equipment_vector[0][0],
	                                     stoi(equipment_vector[0][1]),
	                                     stod(equipment_vector[0][2]));
	vector<Equipment*> test_equipment_vector = {test_equipment};
	auto *test_employee = new Employee(employees_vector[0][0], employees_vector[0][1],
	                                   stoi(employees_vector[0][2]),
	                                   stoi(employees_vector[0][3]),
	                                   test_product, test_profession,
	                                   test_equipment_vector);
	auto *test_employee_1 = new Employee(employees_vector[1][0], employees_vector[1][1],
	                                   stoi(employees_vector[1][2]),
	                                   stoi(employees_vector[1][3]),
	                                   test_product, test_profession,
	                                   test_equipment_vector);
	vector<Employee*> test_employees_list = {test_employee, test_employee_1};
	auto *test_employer = new Employer(employers_vector[0][0], employers_vector[0][1],
	                                stoi(employees_vector[0][2]),
	                                stoi(employees_vector[0][3]),
	                                test_employees_list);

	OUTPUT += very_cool_line;
	OUTPUT += "Employer's " + test_employer->getName() + " " + test_employer->getSurname();
	OUTPUT += " salary: " + to_string(test_employer->calcSalary()) + "\n";
	OUTPUT += test_employer->showSalaries();
	OUTPUT += very_cool_line

*/

//* (begin)
	OUTPUT += very_cool_line;
	for (Employer* _employer : employers_list){
		OUTPUT += "Employer's " + _employer->getName() + " " + _employer->getSurname();
		OUTPUT += " salary: " + to_string(_employer->calcSalary()) + "\n";
		OUTPUT += _employer->showSalaries();
		OUTPUT += cool_line;
	}
	OUTPUT += very_cool_line;
//* (end)

	if (consoleOutputMode) cout << OUTPUT;
	else FILE_OUT << OUTPUT;

	return 0;
}