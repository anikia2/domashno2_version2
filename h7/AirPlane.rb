// Технологично училише Електронни системи към ТУ София, http://www.elsys-bg.org
// 11 А клас
// Номер 12
// Иван Мирославов Манев
// 1. Да се разработи програма, която автоматично подрежда групи хора - по 1/2/3 човека един до друг в даден самолет.


class AirPlane
	@@seats = Hash.new(0)
	@@sum = 0

	def printSeats()
		c = 0
		r = 0
		while r<27
			c = 0
			while c<6
				if c == 2
					print"#{@@seats[[c,r]]}    "
				else
					print"#{@@seats[[c,r]]}"
				end
				c = c + 1
			end
			puts
			r = r + 1
		end
	end

	def fillSeats(rvalue)
		c = 0
		r = 0
		while r<27
			c = 0
			while c<6
				if rvalue == 1 
					if @@seats[[c,r]] == 0
						@@seats[[c,r]] = 1
						@@sum += rvalue
						break
					end
				end

				if rvalue == 2 && c!=2 && c!=5
					 if @@seats[[c,r]] == 0 && @@seats[[c+1,r]] == 0
						@@seats[[c,r]] = 1
						@@seats[[c+1,r]] = 1
						@@sum += rvalue
						break
					 end
				end

				if rvalue == 3 && ((c == 0) || (c == 3))
					if @@seats[[c,r]] == 0 && @@seats[[c+1,r]] == 0 && @@seats[[c+2,r]] == 0
						@@seats[[c,r]] == 1
						@@seats[[c+1,r]] == 1
						@@seats[[c+2,r]] == 1
						@@sum += rvalue
						break
					end
				end
				c = c + 1
			end

			if @@sum == 162
				r = 27
			else
				r = r + 1
		end
	end

	def untakenSeats()
		seats = 0
		if @@sum < 162
			seats = 162 - @@sum
			return seats
		else
			return 0
		end
	end
end

	plane = AirPlane.new
	rvalue = 0
	s = 0
	plane.printSeats()

	while plane.untakenSeats != 0
		rvalue = rand(3) + 1
		plane.add(rvalue)
	end

	plane.printSeats() 
end
