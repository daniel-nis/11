tests = [ {'description': 'PINA: 0x00 => PORTB: 0x00, PORTC: 0x00',
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 5 } ],
    'expected': [('PORTB',0x00),('PORTC',0x00)],
    },

    {'description': 'PINA: 0x42 => PORTB: 0x04, PORTC: 0x20',
    'steps': [ {'inputs': [('PINA',0x42)], 'iterations': 5 } ],
    'expected': [('PORTB',0x04),('PORTC',0x20)],
    },
    
    {'description': 'PINA: 0xA5 => PORTB: 0x0A, PORTC: 0x50',
    'steps': [ {'inputs': [('PINA',0xA5)], 'iterations': 5 } ],
    'expected': [('PORTB',0x0A),('PORTC',0x50)],
    },

 
    ]
#watch = ['PORTB']
