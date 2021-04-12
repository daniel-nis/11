tests = [ {'description': 'PINB: 0x00, PIND: 0x00 => PORTB: 0x00',
    'steps': [ {'inputs': [('PINB',0x00),('PIND',0x00)], 'iterations': 5 } ],
    'expected': [('PORTB',0x00)],
    },

    {'description': 'PINB: 0x01, PIND: 0x22 => PORTB: 0x04',
    'steps': [ {'inputs': [('PINB',0x01),('PIND',0x22)], 'iterations': 5 } ],
    'expected': [('PORTB',0x04)],
    },

    {'description': 'PINB: 0x00, PIND: 0x23 => PORTB: 0x02',
    'steps': [ {'inputs': [('PINB',0x00),('PIND',0x23)], 'iterations': 5 } ],
    'expected': [('PORTB',0x02)],
    },
 
    ]
#watch = ['PORTB']
