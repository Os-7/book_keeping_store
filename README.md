# 📘 C++ Order Book / Bookkeeping Store

A high-performance **C++ order book simulator** that mimics core trading mechanics of a real-world stock exchange. This system tracks buy/sell orders, matches them based on price, and prints the final order book after executing all possible trades.

---

## 🚀 Features

- 📥 **Buy/Sell Order Management** – Handles both buy and sell sides using price-based queues  
- ⚖️ **Order Matching Engine** – Matches orders based on price priority (highest BUY vs lowest SELL)  
- ⏱️ **FIFO Logic** – Maintains quantity and order arrival to simulate real trading conditions  
- 📄 **Order Book Visualization** – Displays live order book depth after matching  
- 🆔 **Auto-Generated Order IDs** for traceability in trades

---

## 🛠 Tech Stack

- **Language:** C++  
- **Headers/Classes:** `Order`, `OrderBook`  
- **Compiler:** `g++`, tested with C++17  
- **Run Mode:** Console application

---

## 📂 File Structure

```
book_keeping_store/
├── main.cpp            # Entry point – simulates various order scenarios
├── order.hpp           # Order struct and type definitions
├── orderBook.hpp       # OrderBook class declaration
├── orderBook.cpp       # OrderBook class implementation
└── orderbook.exe       # Precompiled executable (Windows)
```

---

## 🧪 Sample Output

```
Trade executed: Buy ID 1 <--> Sell ID 3 | Qty: 10 @ Price: 100.5
Trade executed: Buy ID 4 <--> Sell ID 5 | Qty: 5 @ Price: 98.0
...
=== Order Book ===
SELL Orders:
102.0 -> 1 order(s)
103.5 -> 2 order(s)

BUY Orders:
99.0 -> 1 order(s)
98.5 -> 2 order(s)
==================
```

---

## ▶️ How to Compile & Run

### Prerequisite
Make sure you have `g++` installed. On Linux or WSL:
```bash
sudo apt update && sudo apt install g++
```

### Compile:
```bash
g++ main.cpp orderBook.cpp -o orderbook
```

### Run:
```bash
./orderbook
```

On Windows (with MinGW):
```bash
g++ main.cpp orderBook.cpp -o orderbook.exe
orderbook.exe
```

---

## 📌 Future Enhancements

- Live price feed or real-time matching via threads  
- File input/output for trade history logging  
- Advanced matching rules (time-priority, IOC/FOK orders)  
- GUI order book visualizer using Qt or Python

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).

---

## 👨‍💻 Author

Made with ❤️ by [Omshree Samal](mailto:am.omsamal@gmail.com)
