def  insertionsort(num)
    time = Time.now
    for j in 1...num.length
            key = num[j]
            i = j - 1
            while i > 0 and num[i] > key
                    num[i+1] = num[i]
                    i = i - 1
            end
            num[i+1] = key
    end	
    time2 = Time.now
    puts (time2 - time)
end

numbers = []
file = File.new("example.txt", "r")
while (line = file.gets)
    numbers << line
end
file.close


insertionsort(numbers)

