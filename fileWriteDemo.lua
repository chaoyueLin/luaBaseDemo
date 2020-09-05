

local file =io.open("test_file.txt",'w+')
io.output(file)
io.write("hello lua!\nhahaha")
io.close(file)