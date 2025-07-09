# 📘 Stock Bookkeeping System (C++)

A lightweight and efficient **stock trading bookkeeping tool** built in **C++**, designed to track buy/sell trades, compute profit/loss using FIFO logic, and maintain portfolio statistics — all from the terminal. Ideal for traders and developers looking to understand the backend logic of trade tracking systems.

---

## 🚀 Features

- ✅ **Transaction Tracking** – Log buy/sell trades with price, quantity, and timestamp  
- 💸 **PnL Calculation** – FIFO-based profit/loss computation  
- 📊 **Portfolio Overview** – Displays average cost, holdings, and current position  
- 🔐 **Data Validation** – Prevents invalid trades (like overselling)  
- 💾 **File Storage (Optional)** – Save trades and restore sessions (extendable)

---

## 🛠 Tech Stack

- **Language:** C++  
- **Compiler:** g++  
- **Build System:** CMake (optional)  
- **Optional Extensions:** File I/O, unit tests, performance logging

---

## 📂 Project Structure

```
bookkeeping/
├── main.cpp           # Entry point
├── Trade.hpp/.cpp     # Trade model
├── BookKeeper.hpp/.cpp# Core logic: PnL, portfolio
├── utils.hpp/.cpp     # (Optional) helpers
└── README.md
```

---

## 🧪 Sample Output

```
> Buy 100 shares at ₹200
> Buy 50 shares at ₹220
> Sell 80 shares at ₹250

Profit: ₹4,000  
Holdings: 70 shares @ Avg ₹210
```

---

## 🖥️ How to Run

### 🔧 Prerequisites
- C++ compiler (`g++`)
- CMake (optional for larger setups)

### ▶️ Compile and Run (Basic)
```bash
g++ main.cpp -o bookkeeping
./bookkeeping
```

### 🧱 Compile with CMake (Optional)
```bash
mkdir build && cd build
cmake ..
make
./bookkeeping
```

---

## 📌 Future Enhancements
- File-based transaction history
- GUI version with Qt or Python frontend
- Real-time price integration via APIs
- CSV/Excel export

---

## 🤝 Contributing

Feel free to fork the repo and open PRs! Suggestions, bug reports, or improvements are welcome.

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

---

## 👨‍💻 Author

Made with ❤️ by [Omshree Samal](mailto:am.omsamal@gmail.com)
