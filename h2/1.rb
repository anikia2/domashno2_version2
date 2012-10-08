// Технологично училише Електронни системи към ТУ София, http://www.elsys-bg.org
// 11 А клас
// Номер 12
// Иван Мирославов Манев
// 1. Да се разработи програма, която сумира номерата в третата колона.

require "csv"
def process_file_with_csv
	result = 0
	CSV.foreach("CSV Location") do |row|
		result = result + row[2].to_i
	end
	p result
end
 
process_file_with_csv
