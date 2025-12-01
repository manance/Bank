<?php

    require_once 'Acount.php';

    $profile1 = new BankAccount("Pēteris Gailis", 50);
    $profile1->deposit(2);
    $profile1->printInfo();

    $profile2 = new BankAccount("Ernests Ola", 200);
    $profile2->withdraw(400);
    $profile2->printInfo();


?>