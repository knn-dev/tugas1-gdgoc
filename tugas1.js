// =====================================
// LATIHAN PENJAGA ZOOTOPIA
// =====================================
let penjaga = [
  { nama: "Judy Hopps", jarakPerHari: 3 },
  { nama: "Nick Wilde", jarakPerHari: 2 }
];

let totalHari = 5;

console.log("=== LATIHAN PENJAGA ZOOTOPIA ===");
console.log("Jarak lari per hari:");
penjaga.forEach(p => {
  console.log(`${p.nama}: ${p.jarakPerHari} km`);
});
console.log("");

for (let hari = 1; hari <= totalHari; hari++) {
  console.log(`Hari ${hari}:`);
  penjaga.forEach(p => {
    console.log(`- ${p.nama} lari ${p.jarakPerHari} km`);
  });
  console.log("");
}

console.log("=== TOTAL JARAK SELAMA 5 HARI ===");
penjaga.forEach(p => {
  let totalJarak = p.jarakPerHari * totalHari;
  console.log(`${p.nama}: ${totalJarak} km`);
});
