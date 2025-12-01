<?php

class BankAccount{

    public $owner;
    private $balance;

    public function __construct(public string $o, private int $b){

        $this->owner = $o;
        $this->balance = $b;

    }

    public function deposit($amount){
        if($amount > 0){
            $this->balance+=$amount;
        }else{
            echo "Failed deposit!<br>";
        }
    }

    public function withdraw($amount){
        if($amount > 0 && $amount <= $this->balance){
            $this->balance-=$amount;
        }else{
            echo "Failed withdraw!<br>";
        }
    }

    public function printInfo(){
        echo "Owner: " . $this->owner . "<br>";
        echo "Balance: " . $this->balance . "<br><br>";
    }

}

?>