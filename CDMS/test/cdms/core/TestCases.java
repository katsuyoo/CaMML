//
// JUnit test routine.  This is simply a collection of all Camml tests
//
// Copyright (C) 2004 Rodney O'Donnell.  All Rights Reserved.
//
// Source formatted to 100 columns.
// 4567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890

// File: TestCases.java
// Author: rodo@dgs.monash.edu.au

package test.cdms.core;

import junit.framework.*;

/**
 * All Camml Tests
 */
public class TestCases extends TestCase
{
	
	public TestCases(String name) 
	{
		super(name);
	}
	
	protected void setUp() 
	{
	}
	
	/** Add all subtests to the TestCases */
	public static Test suite() 
	{
		TestSuite tSuite = new TestSuite(TestCases.class);
		
		tSuite.addTest( test.cdms.core.TestType.suite() );
		tSuite.addTest( test.cdms.core.TestValue.suite() );
		tSuite.addTest( test.cdms.core.TestValueStatus.suite() );
		
		return tSuite;
	}
	
	
	/** Empty test in place as we require at least one test in a TestCase. */
	public void testNothing() { }
	
}
