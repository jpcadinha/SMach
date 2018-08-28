
echo "##############################"
echo "# FMQSlotMachine test runner #"
echo "##############################" 

../FMQSlotMachine.exe < $1 > output

if [ $? == 0 ]
then
  echo "SUCCESS!"
else
  echo "FAILED!"
fi

plays=$(cat output | grep "^Premio" | wc -l)
plays_with_prize=$(cat output | grep "^Premio" | grep -v "^Premio: 0" | wc -l)
prizes=$(cat output | grep "^Premio" | grep -v "^Premio: 0" | awk '{print $2}')
prizes_info=$(cat output | grep "^Premio" | grep -v "^Premio: 0")
tot=0
for i in ${prizes[@]}; do
  let tot+=$i
done

invalid_bets=$(cat output | grep "Aposta invalida!" | wc -l)
invalid_option=$(cat output | grep "Opcao invalida!" | wc -l)

echo ""
echo "JOGADAS: $plays"
echo "JOGADAS S/ PREMIO: $[$plays - $plays_with_prize]"
echo "JOGADAS C/ PREMIO: $plays_with_prize"
echo "$prizes_info"
echo "Total de Premios: $tot"
echo ""
echo "Total de apostas invalidas: $invalid_bets"
echo "Total de opcoes invalidas: $invalid_option"