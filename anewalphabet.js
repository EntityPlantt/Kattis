// GitHub: EntityPlantt/Kattis
require("readline").createInterface({input: process.stdin}).on("line", s => {
	const new_alphabet = [
		"@", "8", "(", "|)", "3",
		"#", "6", "[-]", "|", "_|",
		"|<", "1", "[]\\/[]", "[]\\[]",
		"0", "|D", "(,)", "|Z", "$",
		"']['", "|_|", "\\/", "\\/\\/",
		"}{", "`/", "2"
	];
	var r = "";
	for (var x of s) {
		if (/[a-zA-Z]/.test(x)) {
			r += new_alphabet[x.toLowerCase().charCodeAt(0) - "a".charCodeAt(0)];
		}
		else {
			r += x;
		}
	}
	console.log(r);
	process.exit();
});