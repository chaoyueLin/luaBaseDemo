sum =0 
i =0 
while i<=100 do
		sum= sum+i
		i=i+1
end
print(sum)

sum =0
i=0
repeat
		sum =sum+i
		i=i+1
until i> 100
print(sum)


sum =0
for i=0,100,1 do
		sum=sum+i
end
print(sum)

days={
	"Monday",
	"Tuesday",
	"Wednesday"
}

for k,v in ipairs(days) do
		print(k,v)
end

