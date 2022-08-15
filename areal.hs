-- GitHub: EntityPlantt/Kattis
main = do 
	n <- getLine
	let x = (read n :: Double)
	print(sqrt x * 4)