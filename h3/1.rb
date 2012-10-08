// Технологично училише Електронни системи към ТУ София, http://www.elsys-bg.org
// 11 А клас
// Номер 12
// Иван Мирославов Манев
// 1. Да се разработи програма, която сумира номерата на учениците, работили съответно на Ruby и Python, в отделни променливи и ги извежда

require "csv"
def process_file_with_csv
	name_p="Python"
	name_r="Ruby"
	result_p = 0
	result_r = 0
	CSV.foreach("CSV location") do |row|
	if row[3] == name_p
	result_p = result_p + row[1].to_i
	end
	if row[3] == name_r
	result_r = result_r + row[1].to_i
	end
	end
	p "Programs on Python:"
	p result_p
	p "Programs on Ruby:"
	p result_r
end 
process_file_with_csv

