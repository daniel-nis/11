tests = [ {'description': 'PINA: 0x00 => PORTC: 0x40',
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 5 } ],
    'expected': [('PORTC',0x40)],
    },

    {'description': 'PINA: 0x83 => PORTC: 0x70',
    'steps': [ {'inputs': [('PINA',0x83)], 'iterations': 5 } ],
    'expected': [('PORTC',0x70)],
    },

    {'description': 'PINA: 0x07 => PORTC: 0x3C',
    'steps': [ {'inputs': [('PINA',0x07)], 'iterations': 5 } ],
    'expected': [('PORTC',0x3C],
    },
 
    ]
#watch = ['PORTB']
