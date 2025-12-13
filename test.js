console.log("---tiket masuk---")
let pengunjung = [{nama: "Keenan", umur: 19}, {nama: "Budi", umur: 25}, {nama: "Citra", umur: 4}, {nama: "Dewi", umur: 12}];

let hargaTiket = 50000;

for (let i = 0; i < pengunjung.length; i++) {
    let nama = pengunjung[i].nama;
    let umur = pengunjung[i].umur;
    let pesan = "";

    if (umur < 5) {
    pesan = "Selamat datang " + nama + "! Tiket Anda gratis karena Anda berumur di bawah 5 tahun.";
}
else if (umur >= 5 && umur <= 15) {
    hargaTiket = hargaTiket * 0.5;
    pesan = "Selamat datang " + nama + "! Harga tiket Anda adalah Rp " + hargaTiket + ".";
}
else if (umur > 15) {
    pesan = "Selamat datang " + nama + "! Harga tiket Anda adalah Rp " + hargaTiket + ".";
}

console.log("Nama pengunjung: " + nama);
console.log("Umur pengunjung: " + umur + " tahun");
console.log(pesan);
}



