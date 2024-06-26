while(!temp.empty()) {
	while(temp.top() >= 0 && temp.top() <= 9) {
		num1 = temp.top();
		temp.pop();
			if(temp.top() >= 0 && temp.top() <= 9) {
				num2 = temp.top();
				temp.pop();
			}
	}
	current = (temp.top() - '0');
	temp.pop();
	switch (current)
	{
	case 43:
		temp.push(num1 + num2);
		break;
	case 45:
		temp.push(num1 - num2);
		break;
    case 42:
		temp.push(num1 * num2);
		break;
    case 47: 
        // if(num2 == 0) throw MyExceptions::DivZero();
        temp.push(num1 / num2); 
        break;
	default
		throw RPN::Args
	}
}
	std::cout << "Result: " << temp.top() << std::endl;