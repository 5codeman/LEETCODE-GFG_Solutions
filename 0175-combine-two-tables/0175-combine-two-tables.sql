# Write your MySQL query statement below

select Person.firstname , Person.lastname, Address.city, Address.state from Person left join Address
on Person.personId = Address.personId;