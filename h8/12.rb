#//Технологично училише Електронни системи към ТУ София, http://www.elsys-bg.org
#//11 А клас
#//Номер 12
#//Иван Мирославов Манев
#//Да се състави програма. която намира на най-популярния ученик 


require "csv"
def process_file_with_csv
	$array = Hash.new(0)
	$arrayc = Hash.new(0)
	q = 0
	w = 0

	CSV.foreach("/home/iwcho/Documents/TP/popular/10.csv") do |row|
		q = row[1].to_i
		for w in 1..30
			if q == w
				$array[w-1] = $array[w-1] + q
			end
		end
	end
end

def usl_a
	a = 0
	for w in 1..30
		$array[w-1] = $array[w-1] / w
		if a<$array[w-1]
			a = w
		end
		$array[w-1] = $array[w-1] * w
	end

	for w in 1..30
		print"#{$array[w-1] } "
		
	end	
	
	
	print "\n a = No:"
	print a
	print "\n"
end

def usl_b
	b = 1
	for w in 1..29
		$array[w-1] = $array[w-1] / w
	
		if b > $array[w-1]
			b = w
		end
		$array[w-1] = $array[w-1] * w
	end

	for w in 1..30
		print"#{$array[w-1] } "
		
	end	
	
	
	print "\n b = No:"
	print b
	print "\n"
end

def usl_c
	c = 0
	
	for i in 1..30
		for w in 0..29
			if $array[w] == $array[i-1]
				$arrayc[c] = $arrayc[c] +1
				c = c + 1
			end
		end
	end

	print "\n\n"

	for c in 0..29
		print"#{$array[c] } "
	end 

	print "\n\n"




end

process_file_with_csv
usl_a
usl_b
usl_c
