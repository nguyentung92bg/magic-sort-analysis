/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$Equals
bool MagicSort_V1_OnePlusOneOfferResponse__Equals (MagicSort_V1_OnePlusOneOfferResponse_o* __this, MagicSort_V1_OnePlusOneOfferResponse_o* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$Equals
   bool MagicSort_V1_OnePlusOneOfferResponse__Equals (MagicSort_V1_OnePlusOneOfferResponse_o*
   __this, MagicSort_V1_OnePlusOneOfferResponse_o* other, const MethodInfo* method); */

ulong MagicSort_V1_OnePlusOneOfferResponse__Equals_38613b4(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
                    /* catch() { ... } // from try @ 03961354 with catch @ 039613b4 */
                    /* catch() { ... } // from try @ 0396133c with catch @ 039613b8 */
                    /* catch() { ... } // from try @ 0396131c with catch @ 039613bc */
  if (param_2 != 0) {
                    /* catch() { ... } // from try @ 03961310 with catch @ 039613c0 */
                    /* catch() { ... } // from try @ 03961308 with catch @ 039613c4
                       catch() { ... } // from try @ 039613ac with catch @ 039613c4 */
                    /* catch() { ... } // from try @ 03961378 with catch @ 039613c8 */
    if (param_2 == param_1) {
      return 1;
    }
    uVar1 = System_String__op_Inequality_1ecf400
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),0);
                    /* try { // try from 039613e4 to 03a613fb has its CatchHandler @ 0396144c */
                    /* try { // try from 03961404 to 03a61407 has its CatchHandler @ 03961440 */
                    /* try { // try from 03961408 to 03a61413 has its CatchHandler @ 0396143c */
                    /* try { // try from 03961414 to 03a61427 has its CatchHandler @ 039612c4 */
                    /* try { // try from 03961428 to 03a61437 has its CatchHandler @ 0396144c */
                    /* catch() { ... } // from try @ 03961408 with catch @ 0396143c */
                    /* catch() { ... } // from try @ 03961404 with catch @ 03961440 */
                    /* catch() { ... } // from try @ 039613e4 with catch @ 0396144c
                       catch() { ... } // from try @ 03961428 with catch @ 0396144c */
                    /* try { // try from 03961454 to 03a61457 has its CatchHandler @ 039614e0 */
                    /* try { // try from 03961458 to 03a6146f has its CatchHandler @ 039612c4 */
                    /* try { // try from 03961470 to 03a61487 has its CatchHandler @ 039614d0 */
                    /* try { // try from 03961488 to 03a614bf has its CatchHandler @ 039612c4 */
    if (((((((uVar1 & 1) == 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20))) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28))) &&
         ((*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30) &&
          ((*(char *)(param_1 + 0x38) != '\0') == (*(char *)(param_2 + 0x38) != '\0'))))) &&
        (((*(char *)(param_1 + 0x39) != '\0') == (*(char *)(param_2 + 0x39) != '\0') &&
         ((uVar1 = System_String__op_Inequality_1ecf400
                             (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40),0),
          (uVar1 & 1) == 0 &&
          (uVar1 = System_String__op_Inequality_1ecf400
                             (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48),0),
          (uVar1 & 1) == 0)))))) &&
       ((uVar1 = System_Object__Equals_23edf0c
                           (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x50),0),
        (uVar1 & 1) != 0 &&
        (uVar1 = System_Object__Equals_23edf0c
                           (*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58),0),
        (uVar1 & 1) != 0)))) {
      plVar2 = *(long **)(param_1 + 0x10);
      plVar3 = *(long **)(param_2 + 0x10);
      if (plVar2 == plVar3) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
        if ((plVar2 != (long *)0x0) && (plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x024edf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x140));
          return uVar1;
        }
      }
      return (ulong)uVar4;
    }
  }
                    /* try { // try from 039614c0 to 03a614cf has its CatchHandler @ 039614d0 */
                    /* catch() { ... } // from try @ 03961470 with catch @ 039614d0
                       catch() { ... } // from try @ 039614c0 with catch @ 039614d0 */
  return 0;
}

