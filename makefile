all:
	g++ -Iinclude/ src/main.cpp src/slot.cpp src/wallet.cpp src/spinner.cpp src/spinner_ch.cpp src/spinner_list.cpp src/prize_engine.cpp src/match_three_char_prize_calc.cpp -o fmqslot
