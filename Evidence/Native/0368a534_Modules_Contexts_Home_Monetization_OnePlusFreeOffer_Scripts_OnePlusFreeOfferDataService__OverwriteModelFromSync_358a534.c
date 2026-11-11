/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferDataService$$OverwriteModelFromSync
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__OverwriteModelFromSync (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService_o* __this, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferDataService$$OverwriteModelFromSync
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__OverwriteModelFromSync
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService_o*
   __this, System_String_o* data, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__OverwriteModelFromSync_358a534
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_058031d8;
                    /* try { // try from 0368a538 to 0378a53f has its CatchHandler @ 0368a574 */
                    /* try { // try from 0368a544 to 0378a553 has its CatchHandler @ 0368a570 */
                    /* try { // try from 0368a558 to 0378a55f has its CatchHandler @ 0368a56c */
  if ((bRam0000000005c32de5 & 1) == 0) {
                    /* try { // try from 0368a564 to 0378a567 has its CatchHandler @ 0368a578 */
    FUN_012d0dc8(PTR_DAT_057ba4b8);
                    /* try { // try from 0368a568 to 0378a593 has its CatchHandler @ 0368a2b8 */
                    /* catch() { ... } // from try @ 0368a558 with catch @ 0368a56c */
                    /* catch() { ... } // from try @ 0368a544 with catch @ 0368a570 */
    FUN_012d0dc8(PTR_DAT_057776c8);
                    /* catch() { ... } // from try @ 0368a538 with catch @ 0368a574 */
                    /* catch() { ... } // from try @ 0368a518 with catch @ 0368a578
                       catch() { ... } // from try @ 0368a564 with catch @ 0368a578 */
    FUN_012d0dc8(PTR_DAT_058031d8);
    bRam0000000005c32de5 = 1;
  }
  puVar1 = PTR_DAT_057776c8;
                    /* try { // try from 0368a594 to 0378a5a7 has its CatchHandler @ 0368a7fc */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b1ff4
                    (param_2,*(undefined8 *)puVar1);
                    /* try { // try from 0368a5ac to 0378a5af has its CatchHandler @ 0368a7f8 */
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar3;
    FUN_012d0d74(puVar4,uVar3);
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
                    /* try { // try from 0368a5f0 to 0378a617 has its CatchHandler @ 0368a814 */
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057ba4b8) {
                    /* try { // try from 0368a618 to 0378a6d7 has its CatchHandler @ 0368a2b8 */
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0368a624;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057ba4b8,0);
LAB_0368a624:
                    /* WARNING: Could not recover jumptable at 0x0368a63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

