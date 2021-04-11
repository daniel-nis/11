tests = [ {'description': 'PINA: 0x00 => PORTC: 0x40',
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 5 } ],
    'expected': [('PORTC',0x40)],
    },

    {'description': 'PINA: 0x3F => PORTC: 0xBF',
    'steps': [ {'inputs': [('PINA',0x3F)], 'iterations': 5 } ],
    'expected': [('PORTC',0xBF)],
    },

    {'description': 'PINA: 0x7F => PORTC: 0x3F',
    'steps': [ {'inputs': [('PINA',0x7F)], 'iterations': 5 } ],
    'expected': [('PORTC',0x3F],
    },
 
    ]
#watch = ['PORTB']
