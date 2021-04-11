tests = [ {'description': 'PINA: 64, PINB: 64, PINC: 64 => PORTD: 0x31',
    'steps': [ {'inputs': [('PINA',0x40),('PINB',0x40),('PINC',0x40)], 'iterations': 5 } ],
    'expected': [('PORTC',0x31)],
    },

    {'description': 'PINA: 0, PINB: 35, PINC: 85 => PORTD: 0x1E',
    'steps': [ {'inputs': [('PINA',0x00),('PINB',0x23),('PINC',0x55)], 'iterations': 5 } ],
    'expected': [('PORTC',0x1E)],
    },

    {'description': 'PINA: 0, PINB: 56, PINC: 85 => PORTD: 0x22',
    'steps': [ {'inputs': [('PINA',0x00),('PINB',0x38),('PINC',0x55)], 'iterations': 5 } ],
    'expected': [('PORTC',0x22)],
    },
 
    ]
#watch = ['PORTB']
