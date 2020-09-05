local file = io.open("test_file.txt",'r')
io.input(file)

for line in io.lines() do
	print(line)
end
io.close(file)

local file = io.open("test_file.txt",'r')

file:seek("end",-5)
print(file:read("*a"))

file:close()