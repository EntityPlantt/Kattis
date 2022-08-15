# GitHub: EntityPlantt/Kattis
x = gets
y = x.split[-1].to_i
x = x.split[0].to_i
r = gets.to_i
puts (x - r).to_s + " " + (y - r).to_s
puts (x - r).to_s + " " + (y + r).to_s
puts (x + r).to_s + " " + (y + r).to_s
puts (x + r).to_s + " " + (y - r).to_s